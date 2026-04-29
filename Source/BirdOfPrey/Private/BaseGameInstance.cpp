#include "BaseGameInstance.h"

void UBaseGameInstance::SetPlayerAgentInfoFor(int32 PlayerControllerID, FSAgentInfo& Info)
{
}

FSAgentInfo UBaseGameInstance::GetPlayerAgentInfoFor(int32 PlayerControllerID, bool& Result)
{
    Result = false;
    return FSAgentInfo();
}