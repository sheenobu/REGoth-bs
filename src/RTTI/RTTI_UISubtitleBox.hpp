#include "RTTIUtil.hpp"
#include <components/UISubtitleBox.hpp>

namespace REGoth
{
  class RTTI_UISubtitleBox
      : public bs::RTTIType<UISubtitleBox, UIElement, RTTI_UISubtitleBox>
  {
    BS_BEGIN_RTTI_MEMBERS
    // TODO: Fill RTTI Members
    BS_END_RTTI_MEMBERS

  public:
    RTTI_UISubtitleBox()
    {
    }

    REGOTH_IMPLEMENT_RTTI_CLASS_FOR_COMPONENT(UISubtitleBox)
  };
}  // namespace REGoth
