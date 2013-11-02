/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BBRemoteDataProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BBSectionInfo;

__attribute__((visibility("hidden")))
@interface SBNotificationCenterDataProvider : XXUnknownSuperclass <BBRemoteDataProvider> {
	BBSectionInfo *_sectionInfo;
}
+ (id)notificationCenterDataProviderWithSectionInfo:(id)sectionInfo;
- (id)initWithSectionInfo:(id)sectionInfo;
- (id)bulletinsWithRequestParameters:(id)requestParameters lastCleared:(id)cleared;
- (void)dealloc;
- (id)defaultSectionInfo;
- (id)sectionIdentifier;
- (id)sortDescriptors;
@end

