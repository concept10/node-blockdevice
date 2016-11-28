#include <node.h>
#include <v8.h>
#include <nan.h>

#include "BlockDevice.h"

using node;
using std;
using v8;

BlockDevice::BlockDevice() {}
BlockDevice::~BlockDevice() {}

NAN_METHOD( BlockDevice::New ) {
  
  NanScope();
  Int64* obj = NULL;
  
  // TODO
  
  obj->Wrap( args.This() );
  NanReturnThis();
  
}
