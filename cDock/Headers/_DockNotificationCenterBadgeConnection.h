//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_xpc_object>, NSSet;

@interface _DockNotificationCenterBadgeConnection : NSObject
{
    BOOL _needsAuthentication;
    BOOL _serverConnectionFailure;
    NSObject<OS_xpc_object> *_connection;
    NSSet *_badgesDisabledForBundleIdentifiers;
}

- (void).cxx_destruct;
- (id)_serverConnection;
- (void)_got_server_keep_alive:(id)arg1;
- (void)_send_connection_authentication;
- (void)_handleDisabledBadgesSet:(id)arg1;
- (void)_handleDockBadgeSet:(id)arg1;
- (BOOL)badgesDisabledForIdentifier:(id)arg1;
- (void)tellNCAboutUpdatedApp:(id)arg1;
- (void)tellNCAboutDeletedApp:(id)arg1;
- (id)init;

@end

