#include <any>
#include <vector>

#include "string"
#include "cstdint"

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

void Exchange(Request request, Response response) {
    Buffer* buf = new Buffer();

};

struct DefaultClient {
    bool debugOn;
    void debug(std::any value) {
        if (this->debugOn) {

        }
    }
};

struct loginData {
    std::string login;
    std::string password;
};

struct GetSession {
    loginData;
    uint64_t kindleID;
};

struct defaultAccountService {
    Account accountRepository;

};

// encoder (encode.go)
// odpowiednik encodowania w cpp


int main() {

}