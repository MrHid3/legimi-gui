#include "string"
#include "cstdint"

struct loginData {
    std::string login;
    std::string password;
};

struct GetSession {
    loginData;
    uint64_t kindleID;
};

// encoder (encode.go)
// o co chodzi z io.Writer?
// odpowiednik encodowania w cpp



int main() {

}