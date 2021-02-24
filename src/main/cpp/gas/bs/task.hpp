#pragma once 

#include <gas\core\obj.hpp>

namespace gas{
namespace bs{

struct task: public obj{
    virtual ~task() = 0;
    virtual void perform() = 0;
};

}
}