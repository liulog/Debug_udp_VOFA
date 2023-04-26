// #ifndef UDP_SERVER_H
// #define UDP_SERVER_H

// #include <boost/asio.hpp>
// #include <iostream>

// namespace ly
// {   
//     /**
//      * @brief 根据VOFA+ 
//      * 
//      */
//     struct PoseDataFrame
//     {
//         float fdata[2];         // pitch, yaw数据
//         unsigned char tail[4]{0x00, 0x00, 0x80, 0x7f};
//     };

//     class UDP_Server
//     {
//     public:
//         UDP_Server(unsigned short port);
//         ~UDP_Server();
//         void write(PoseDataFrame &poseDataFrame);

//     private:
//         boost::asio::io_service io_service_;
//         boost::asio::ip::udp::socket socket_;
//         boost::asio::ip::udp::endpoint remote_endpoint_;
//         // 注意，需要新增加一个帧尾，所以需要为3
//         char posedata[3 * sizeof(float)];   
//     };
// }

// #endif