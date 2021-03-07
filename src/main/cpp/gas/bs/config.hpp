#pragma once

#include <gas\core\args\args.hpp>

namespace gas{
namespace bs{

/**
 * @brief Артефакт - он же модуль или же то что 
 * нужно получить в ходе выполнения оприеделённых 
 * задач
*/
class config{
private:
    gas::base_args* _args;
public:
    config(gas::base_args* args);
    ~config();
};

}
}