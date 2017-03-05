主要是2.6的版本
=====

参考的[这里](http://cocoa-chen.github.io/blog/2016/03/29/iosshi-yong-protocolbuffers/)

### 1. 下载
```
https://github.com/google/protobuf/releases/download/v2.6.1/protobuf-2.6.1.tar.bz2
```
```
./autogen.sh
./configure --prefix=/Users/`whoami`/Desktop/pb2.6.1
make
make install
```

### 2. 安装protoc-gen-objc插件
`因为2.6的原生不支持oc，所以这里需要插件来生成oc代码`
```
git clone https://github.com/alexeyxo/protobuf-objc.git
cd protobuf-objc
./autogen.sh
./configure CXXFLAGS=-I/Users/`whoami`/Desktop/pb2.6.1/include LDFLAGS=-L/Users/`whoami`/Desktop/pb2.6.1/lib
make
```

复制src/compiler下的protoc-gen-objc到pb的bin目录

### 3. 生成oc类
```
cd iosProtoBufDemo
protoc --plugin=/Users/`whoami`/Desktop/pb2.6.1/bin/protoc-gen-objc ./proto/*.proto --objc_out="./ProtoBuf"
```

注意，生成的文件是non arc的，需要工程选项里面配置一下
```
-fno-objc-arc
```