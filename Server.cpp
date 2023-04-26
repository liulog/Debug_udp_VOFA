// #include "Server.h"

// namespace ly
// {
//     /**
//      * @brief Construct a new udp server::udp server object
//      *
//      * @param port 端口号
//      */

//     UDP_Server::UDP_Server(unsigned short port)
//         : socket_(io_service_, boost::asio::ip::udp::endpoint(boost::asio::ip::udp::v4(), port))
//     {
//         std::cout << "UDP server started at port " << port << "." << std::endl;
//     }

//     void UDP_Server::write(PoseDataFrame &poseDataFrame)
//     {
//         memcpy(posedata, &poseDataFrame, sizeof(PoseDataFrame));
//         socket_.send_to(boost::asio::buffer(posedata), remote_endpoint_);
//     }

//     UDP_Server::~UDP_Server()
//     {
//         socket_.close();
//         std::cout << "UDP server stopped." << std::endl;
//     }
// }