#include "factory/channel_factory.hpp"

#include <boost/asio.hpp>
#include <memory>
#include <string>
#include <variant>

namespace unilink {
namespace factory {

using namespace transport;

std::shared_ptr<Channel> ChannelFactory::create_serial(
    boost::asio::io_context& ioc, const SerialConfig& cfg) {
  return std::make_shared<Serial>(ioc, cfg);
}

std::shared_ptr<Channel> ChannelFactory::create_tcp_client(
    boost::asio::io_context& ioc, const TcpClientConfig& cfg) {
  return std::make_shared<TcpClient>(ioc, cfg);
}

std::shared_ptr<Channel> ChannelFactory::create_tcp_server(
    boost::asio::io_context& ioc, const TcpServerConfig& cfg) {
  return std::make_shared<TcpServer>(ioc, cfg);
}

}  // namespace factory
}  // namespace unilink