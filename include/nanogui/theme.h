#if !defined(__NANOGUI_THEME_H)
#define __NANOGUI_THEME_H

#include <nanogui/nanogui.h>

NANOGUI_NAMESPACE_BEGIN

struct Theme {
public:
    /* Fonts */
    int mFontNormal;
    int mFontBold;
    int mFontIcons;

    /* Spacing-related parameters */
    int mStandardFontSize;
    int mButtonFontSize;
    int mWindowCornerRadius;
    int mWindowHeaderHeight;
    int mWindowDropShadowSize;
    int mButtonCornerRadius;

    /* Generic colors */
    Color mDropShadow;
    Color mTransparent;
    Color mBorderDark;
    Color mBorderLight;
    Color mBorderMedium;
    Color mTextColor;
    Color mDisabledTextColor;
    Color mTextColorShadow;
    Color mIconColor;

    /* Button colors */
    Color mButtonGradientTopFocused;
    Color mButtonGradientBotFocused;
    Color mButtonGradientTopUnfocused;
    Color mButtonGradientBotUnfocused;
    Color mButtonGradientTopPushed;
    Color mButtonGradientBotPushed;

    /* Window colors */
    Color mWindowFillUnfocused;
    Color mWindowFillFocused;
    Color mWindowTitleUnfocused;
    Color mWindowTitleFocused;

    Color mWindowHeaderGradientTop;
    Color mWindowHeaderGradientBot;
    Color mWindowHeaderSepTop;
    Color mWindowHeaderSepBot;

    Color mWindowPopup;
    Color mWindowPopupTransparent;

	Theme(NVGcontext *ctx);

	void* operator new(size_t size)
	{
		void* p = _aligned_malloc(size, 16);
		if (p == 0)  throw std::bad_alloc();
		return p;
	}

	void operator delete(void *p)
	{
		Theme* pc = static_cast<Theme*>(p);
		_aligned_free(p);
	}
};

NANOGUI_NAMESPACE_END

#endif /* __NANOGUI_THEME_H */
