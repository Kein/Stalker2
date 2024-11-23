#include "ActionBlockerConditionBase.h"

UActionBlockerConditionBase::UActionBlockerConditionBase() {
}

bool UActionBlockerConditionBase::CanTrigger_Implementation() const {
    return false;
}


