#include "WorldPosition.h"
#include "GameFramework/Actor.h"


UWorldPosition::UWorldPosition()
{
	
	PrimaryComponentTick.bCanEverTick = true;
	
}

void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();
	
    FString ObjectName = GetOwner()->GetActorLocation().ToString();

	FString ObjectPositition = 
			GetOwner()->GetActorTransform().GetLocation().ToString();
	
  
   	UE_LOG(LogTemp, Warning, TEXT("%s positition in world is: %s"), 
	*ObjectName, *ObjectPositition);
}


void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// ...
}
