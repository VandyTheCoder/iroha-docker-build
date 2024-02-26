// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: mst.proto

#include "mst.pb.h"
#include "mst.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace iroha {
namespace network {
namespace transport {

static const char* MstTransportGrpc_method_names[] = {
  "/iroha.network.transport.MstTransportGrpc/SendState",
};

std::unique_ptr< MstTransportGrpc::Stub> MstTransportGrpc::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MstTransportGrpc::Stub> stub(new MstTransportGrpc::Stub(channel));
  return stub;
}

MstTransportGrpc::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SendState_(MstTransportGrpc_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status MstTransportGrpc::Stub::SendState(::grpc::ClientContext* context, const ::iroha::network::transport::MstState& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::iroha::network::transport::MstState, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SendState_, context, request, response);
}

void MstTransportGrpc::Stub::experimental_async::SendState(::grpc::ClientContext* context, const ::iroha::network::transport::MstState* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::iroha::network::transport::MstState, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SendState_, context, request, response, std::move(f));
}

void MstTransportGrpc::Stub::experimental_async::SendState(::grpc::ClientContext* context, const ::iroha::network::transport::MstState* request, ::google::protobuf::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SendState_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* MstTransportGrpc::Stub::PrepareAsyncSendStateRaw(::grpc::ClientContext* context, const ::iroha::network::transport::MstState& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::protobuf::Empty, ::iroha::network::transport::MstState, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SendState_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* MstTransportGrpc::Stub::AsyncSendStateRaw(::grpc::ClientContext* context, const ::iroha::network::transport::MstState& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSendStateRaw(context, request, cq);
  result->StartCall();
  return result;
}

MstTransportGrpc::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MstTransportGrpc_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MstTransportGrpc::Service, ::iroha::network::transport::MstState, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](MstTransportGrpc::Service* service,
             ::grpc::ServerContext* ctx,
             const ::iroha::network::transport::MstState* req,
             ::google::protobuf::Empty* resp) {
               return service->SendState(ctx, req, resp);
             }, this)));
}

MstTransportGrpc::Service::~Service() {
}

::grpc::Status MstTransportGrpc::Service::SendState(::grpc::ServerContext* context, const ::iroha::network::transport::MstState* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace iroha
}  // namespace network
}  // namespace transport
