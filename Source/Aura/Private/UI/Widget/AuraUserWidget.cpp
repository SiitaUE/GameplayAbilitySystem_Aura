// Copyright DambrainePL


#include "UI/Widget/AuraUserWidget.h"

void UAuraUserWidget::SetWidgetController(UObject* InWindgetController)
{
	WidgetController = InWindgetController;
	WidgetControllerSet();
}
