#include <iostream>
#include <string>
#include <boost/asio.hpp>
#include <boost/array.hpp>

using boost::asio::ip::udp;

struct MyData
{
    float a;
    float b;
    unsigned char tail[4]{0x00, 0x00, 0x80, 0x7f};
};

int main()
{
    try
    {
        boost::asio::io_service io_service;

        // 设置远程 Windows 的 IP 和端口号
        udp::endpoint remote_endpoint(boost::asio::ip::address::from_string("192.168.1.3"), 3000);

        // 创建 UDP 套接字并绑定到本地地址
        udp::socket socket(io_service, udp::endpoint(udp::v4(), 0));

        // 创建要发送的数据
        MyData data;
        data.a=1;
        data.b=2;

        // 将结构转换为字符串格式
        std::string message(sizeof(data), '\0');
        std::memcpy((void *)message.data(), &data, sizeof(data));

        // 将数据包发送到远程地址
        socket.send_to(boost::asio::buffer(message), remote_endpoint);

        std::cout << "Sent data to " << remote_endpoint << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}