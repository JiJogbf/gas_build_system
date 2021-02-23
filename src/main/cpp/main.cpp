#include <gas\core\args.hpp>

#include "gas\bs\artefact.hpp"

int main(int argc, char** argv){
    gas::base_args* args = new gas::safe_args(
        new gas::args(argc, argv));
    gas::bs::artefact* art = new gas::bs::artefact();
    
    // чтение файла проекта
    art->load();
    
    // подготовка необходимых ресурсов
    
    // подготовка очреди задач по файлу 
    // проекта
    
    // выполнение задач


    delete art;
    delete args;

    return 0;
}