#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "NPC_AIController.generated.h"

/**
 * ANPC_AIController
 *
 * Esta clase es un controlador de inteligencia artificial (IA) que se utiliza para controlar a los personajes no jugables (NPC) en el juego.
 * Hereda de AAIController, proporcionando funcionalidad adicional para la posesi�n y control de peones (pawns).
 */
UCLASS()
class UNREALENGINECOURSE_API ANPC_AIController : public AAIController
{
	GENERATED_BODY()

public:
	/**
	 * Constructor de la clase ANPC_AIController.
	 *
	 * @param ObjectInitializer Inicializador de objetos utilizado para configurar las propiedades del objeto.
	 */
	explicit ANPC_AIController(FObjectInitializer const& ObjectInitializer);

protected:
	/**
	 * M�todo llamado cuando este controlador posee un pe�n (pawn).
	 *
	 * @param InPawn El pe�n que ser� pose�do por este controlador.
	 */
	virtual void OnPossess(APawn* InPawn) override;
};
