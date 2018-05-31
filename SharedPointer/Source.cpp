#include "CompositeComponent.h"
#include "LetterComponent.h"
#include <memory>
void main()
{
	CompositeComponent composite(
		IComponent::sptr(
			new CompositeComponent(
				IComponent::sptr(
					new LetterComponent('a')
				)
			)
		)
	);
	composite.addIComponent(
		IComponent::sptr(
			new CompositeComponent(
				IComponent::sptr(
					new LetterComponent('b')
				)
			)
		)
	);
	composite.operate();
	system("pause");
}
