/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BBRemoteDataProvider.h"


__attribute__((visibility("hidden")))
@interface SBTestDataProvider : XXUnknownSuperclass <BBRemoteDataProvider> {
	BBDataProviderConnection *_connection;
	BBDataProviderProxy *_proxy;
	NSMutableArray *_bulletinRequests;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (id)sharedInstance;
- (id)init;
- (id)_existingBulletinRequestForPublisherBulletinID:(id)publisherBulletinID;
- (id)_newBulletinRequest:(id)request;
- (float)attachmentAspectRatioForRecordID:(id)recordID;
- (id)attachmentPNGDataForRecordID:(id)recordID sizeConstraints:(id)constraints;
- (id)bulletinsWithRequestParameters:(id)requestParameters lastCleared:(id)cleared;
- (id)clearedInfoForBulletins:(id)bulletins lastClearedInfo:(id)info;
- (id)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)lastClearedInfo;
- (id)clearedInfoForClearingBulletinsFromDate:(id)date toDate:(id)date2 lastClearedInfo:(id)info;
- (void)dataProviderDidLoad;
- (id)defaultSectionInfo;
- (id)defaultSubsectionInfos;
- (id)displayNameForSubsectionID:(id)subsectionID;
- (void)noteSectionInfoDidChange:(id)noteSectionInfo;
- (void)publish;
- (void)receiveMessageWithName:(id)name userInfo:(id)info;
- (id)sectionDisplayName;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (id)sortDescriptors;
@end

