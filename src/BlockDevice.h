#ifndef BLOCKDEVICE_H
#define BLOCKDEVICE_H

#include <node.h>
#include <v8.h>
#include <nan.h>

using node;
using v8;

class BlockDevice : public ObjectWrap {
  
  public:
  
  static void Init( Handle<Object> exports );
  
  private:
  
  BlockDevice();
  ~BlockDevice();

  static Persistent<Function> constructor;
  
};

#endif
