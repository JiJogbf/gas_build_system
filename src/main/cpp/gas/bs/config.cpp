#include "config.hpp"

namespace gas{
namespace bs{

config::config(gas::base_args* args): _args(args){}

config::~config(){
    delete _args;
}

}
}