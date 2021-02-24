#include "artefact.hpp"

namespace gas{
namespace bs{

artefact::artefact(config* cfg): _cfg(cfg){

}

artefact::~artefact(){
    delete _cfg;
}

void artefact::execute(){
    
}

void artefact::load(){
    
}

}
}