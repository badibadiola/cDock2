//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FSWMWindow.h"

@class CAContext, CAPluginLayer, ECMaterialLayer;

@interface FSWMProxyWindow : FSWMWindow
{
    unsigned int _parentWindow;
    CAContext *_context;
    unsigned int _sid;
    unsigned int _widParent;
    CAPluginLayer *_pluginLayer;
    ECMaterialLayer *_materialLayer;
}

- (void).cxx_destruct;
- (void)show;
- (void)fadeOut:(float)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithWindow:(unsigned int)arg1;

@end
