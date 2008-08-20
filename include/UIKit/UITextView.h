/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIScroller.h>

#import "UITextTraitsClientProtocol.h"

@class DOMHTMLElement, NSString, UIDelayedAction, UIView, UIWebView, WebCoreFrameBridge, WebFrame;

@interface UITextView : UIScroller <UITextTraitsClient>
{
    UIWebView *m_webView;
    WebFrame *m_frame;
    WebCoreFrameBridge *m_bridge;
    DOMHTMLElement *m_body;
    NSString *m_textFont;
    float m_textSize;
    int m_marginTop;
    struct CGColor *m_textColor;
    UIDelayedAction *m_selectionTimer;
    UIView *m_topAccessoryView;
    id m_delegate;
    UIDelayedAction *m_longPressAction;
    struct CGPoint m_mouseDownPoint;
    struct CGPoint m_mouseDownOffset;
    struct __GSEvent *m_mouseDownEvent;
    BOOL m_selecting;
    BOOL m_sentMouseDown;
    BOOL m_handlingMouse;
    BOOL m_passMouseDownToOther;
    BOOL m_editable;
    BOOL m_scrollOnMouseUp;
}

- (id)HTML;	// IMP=0x3242d2a4
- (id)_webView;	// IMP=0x3242dbb4
- (BOOL)becomeFirstResponder;	// IMP=0x3242dbbc
- (id)body;	// IMP=0x3242d22c
- (BOOL)bodyAlwaysFillsFrame;	// IMP=0x3242cb8c
- (BOOL)canBecomeFirstResponder;	// IMP=0x3242dc8c
- (BOOL)canResignFirstResponder;	// IMP=0x3242dc94
- (void)commonInit;	// IMP=0x3242c840
- (struct CGPoint)constrainedPoint:(struct CGPoint)fp8;	// IMP=0x3242dd1c
- (void)dealloc;	// IMP=0x3242ca74
- (id)delegate;	// IMP=0x3242cdbc
- (void)ensureSelection;	// IMP=0x3242dc9c
- (void)forwardInvocation:(id)fp8;	// IMP=0x3242ee0c
- (id)hitTest:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;	// IMP=0x3242cdcc
- (id)initWithFrame:(struct CGRect)fp8;	// IMP=0x3242c490
- (id)initWithFrame:(struct CGRect)fp8 webView:(id)fp24;	// IMP=0x3242c784
- (BOOL)isEditable;	// IMP=0x3242d448
- (int)marginTop;	// IMP=0x3242d2e8
- (id)methodSignatureForSelector:(SEL)fp8;	// IMP=0x3242eec8
- (void)mouseDown:(struct __GSEvent *)fp8;	// IMP=0x3242e020
- (void)mouseDragged:(struct __GSEvent *)fp8;	// IMP=0x3242e27c
- (void)mouseUp:(struct __GSEvent *)fp8;	// IMP=0x3242e438
- (void)movedToSuperview:(id)fp8;	// IMP=0x3242ea6c
- (void)performBecomeEditableTasks;	// IMP=0x3242d534
- (BOOL)pointInTopAccessoryView:(struct CGPoint)fp8;	// IMP=0x3242de60
- (void)recalculateStyle;	// IMP=0x3242cd58
- (struct CGRect)rectForSelection:(struct _NSRange)fp8;	// IMP=0x3242d930
- (void)registerForEditingDelegateNotification:(id)fp8 selector:(SEL)fp12;	// IMP=0x3242cb94
- (void)repositionCaretToVisibleRect;	// IMP=0x3242f74c
- (BOOL)resignFirstResponder;	// IMP=0x3242dc40
- (void)scrollToMakeCaretVisible:(BOOL)fp8;	// IMP=0x3242f414
- (void)selectAll;	// IMP=0x3242ef8c
- (struct _NSRange)selectionRange;	// IMP=0x3242d5a4
- (void)setDelegate:(id)fp8;	// IMP=0x3242cdc4
- (void)setEditable:(BOOL)fp8;	// IMP=0x3242d454
- (void)setFrame:(struct CGRect)fp8;	// IMP=0x3242f978
- (void)setHTML:(id)fp8;	// IMP=0x3242d234
- (void)setMarginTop:(int)fp8;	// IMP=0x3242d2f0
- (void)setSelectionRange:(struct _NSRange)fp8;	// IMP=0x3242d5ec
- (void)setSelectionToEnd;	// IMP=0x3242d830
- (void)setSelectionToStart;	// IMP=0x3242d730
- (void)setSelectionWithPoint:(struct CGPoint)fp8;	// IMP=0x3242d6c8
- (void)setText:(id)fp8;	// IMP=0x3242d008
- (void)setTextColor:(struct CGColor *)fp8;	// IMP=0x3242d3e4
- (void)setTextFont:(id)fp8;	// IMP=0x3242d31c
- (void)setTextSize:(float)fp8;	// IMP=0x3242d39c
- (void)setTopAccessoryView:(id)fp8;	// IMP=0x3242da08
- (id)styleString;	// IMP=0x3242ccac
- (void)suggestionBarWillShow:(id)fp8;	// IMP=0x3242cc8c
- (void)takeTraitsFrom:(id)fp8;	// IMP=0x3242edec
- (id)text;	// IMP=0x3242f024
- (struct CGColor *)textColor;	// IMP=0x3242d440
- (void)textLoupeTimerAction;	// IMP=0x3242dec4
- (float)textSize;	// IMP=0x3242d394
- (id)textTraits;	// IMP=0x3242edcc
- (struct CGSize)tileSizeForSize:(struct CGSize)fp8;	// IMP=0x3242cc18
- (id)topAccessoryView;	// IMP=0x3242da00
- (void)updateWebViewObjects;	// IMP=0x3242ced8
- (struct CGRect)visibleRect;	// IMP=0x3242f8f8
- (struct CGRect)visibleTextRect;	// IMP=0x3242ce20
- (BOOL)webView:(id)fp8 shouldDeleteDOMRange:(id)fp12;	// IMP=0x3242e99c
- (BOOL)webView:(id)fp8 shouldInsertText:(id)fp12 replacingDOMRange:(id)fp16 givenAction:(int)fp20;	// IMP=0x3242ea00
- (void)webViewDidChange:(id)fp8;	// IMP=0x3242eae0

@end

