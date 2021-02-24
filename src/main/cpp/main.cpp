#include <gas\core\args.hpp>

#include "gas\bs\artefact.hpp"
#include "gas\bs\config.hpp"

int main(int argc, char** argv){
    gas::bs::artefact* art = new gas::bs::artefact(
        new gas::bs::config(
            new gas::safe_args(
                new gas::args(argc, argv)
            )
        )
    ); 
    art->load();
    art->execute();
    delete art;
    return 0;
}