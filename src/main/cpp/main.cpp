#include <gas\core\args.hpp>

int main(int argc, char** argv){
    gas::base_args* args = new gas::safe_args(
        new gas::args(argc, argv));
    // чтение файла проекта
    
    // подготовка необходимых ресурсов
    
    // подготовка очреди задач по файлу 
    // проекта
    
    // выполнение задач
    
    delete args;
    return 0;
}