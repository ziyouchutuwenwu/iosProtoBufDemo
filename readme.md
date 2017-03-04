主要是2.6的版本

参考的
```
http://cocoa-chen.github.io/blog/2016/03/29/iosshi-yong-protocolbuffers/
```

下载
```
https://github.com/google/protobuf/releases/download/v2.6.1/protobuf-2.6.1.tar.bz2
```
```
./autogen.sh
./configure --prefix=/Users/`whoami`/Desktop/pb2.6.1
make
make install

```

安装protoc-gen-objc,因为google原生不支持objc，所以这里需要通过protoc-gen-objc插件来编译生成Objective-C代码
```
git clone https://github.com/alexeyxo/protobuf-objc.git
cd protobuf-objc
./autogen.sh
./configure CXXFLAGS=-I/Users/`whoami`/Desktop/pb2.6.1/include LDFLAGS=-L/Users/`whoami`/Desktop/pb2.6.1/lib
make
```

复制src/compiler下的protoc-gen-objc

生成oc类
```
cd iosProtoBufDemo
protoc --plugin=/Users/`whoami`/Desktop/pb2.6.1/bin/protoc-gen-objc ./proto/*.proto --objc_out="./ProtoBuf"
```

注意，生成的文件是
```
-fno-objc-arc
```
