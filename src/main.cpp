#include <any>
#include <iostream>
#include <vector>
#include "string"
#include "cstdint"
// #include <httprequest.h>
#include <winsock2.h>

std::string apiURL = "https://app.legimi.pl/svc/sync/core.aspx";
using readOp = int8_t;

class Account {
    std::string GetLogin();
    std::string GetPassword();
    std::string GetKindleId();
    void SaveLogin();
    void SavePassword();
    void SaveKindleId();
};

class Client {

};

class IOWriter {
    int Write(std::byte[]);
};

class IOReader {
    int Read(std::byte[]);
};

class Encoder {
    void Encode(IOWriter);
    int EncodedLength();
};

class Decoder {
    int Decoode(IOReader);
};

class Typed {
    uint16_t Type();
};

class Request : Typed, Encoder{

};

class Response : Typed, Decoder{

};

class Formater {
    std::string DebugFormat();
};

struct Buffer {
    std::vector<std::byte> buf;
    int off;
    readOp lastRead;
};

// void Exchange(Request request, Response response) {
//     http::Request r{apiURL};
//     const auto rs  = r.send("GET");
//     std::cout << std::string{rs.body.begin(), rs.body.end()} << '\n';
// };

struct loginData {
    std::string login;
    std::string password;
};

struct GetSession {
    loginData loginData;
    uint64_t kindleID;
};

struct defaultAccountService {
    Account accountRepository;
};

// encoder (encode.go)
// odpowiednik encodowania w cpp


int main() {
    // Exchange(Request{}, Response{});
    WSADATA wsaData;

    int result = WSAStartup( MAKEWORD( 2, 2 ), & wsaData );
    if( result != NO_ERROR )
        printf( "Initialization error.\n" );
    SOCKET mainSocket = socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );
    if( mainSocket == INVALID_SOCKET )
    {
        printf( "Error creating socket: %ld\n", WSAGetLastError() );
        WSACleanup();
        return 1;
    }
}