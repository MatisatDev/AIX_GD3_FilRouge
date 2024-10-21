// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyState_Parent.generated.h"

/**
 * 
 */
UCLASS()
class AIX_GD3_FILROUGE_API UMyState_Parent : public UObject
{
	GENERATED_BODY()

protected:
	virtual void EnterState(class PlayerFSM statemachine);
	virtual void Behaviour(class PlayerFSM statemachine);
	virtual void ExitState(class PlayerFSM statemachine);
};
