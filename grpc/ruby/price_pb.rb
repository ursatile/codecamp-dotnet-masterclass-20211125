# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: price.proto

require 'google/protobuf'

Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("price.proto", :syntax => :proto3) do
    add_message "price.PriceRequest" do
      optional :modelCode, :string, 1
      optional :color, :string, 2
      optional :year, :int32, 3
    end
    add_message "price.PriceReply" do
      optional :price, :int32, 1
      optional :currencyCode, :string, 2
    end
  end
end

module Price
  PriceRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("price.PriceRequest").msgclass
  PriceReply = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("price.PriceReply").msgclass
end
