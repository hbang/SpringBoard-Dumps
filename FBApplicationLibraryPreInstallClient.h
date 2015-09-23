/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBApplicationLibraryObserver.h"


@protocol FBApplicationLibraryPreInstallClient <FBApplicationLibraryObserver>
@optional
- (void)applicationLibrary:(id)library _willNotify_didAddApplications:(id)applications completion:(id)completion;
- (void)applicationLibrary:(id)library _willNotify_didAddPlaceholders:(id)placeholders completion:(id)completion;
- (void)applicationLibrary:(id)library _willNotify_didCancelPlaceholders:(id)placeholders completion:(id)completion;
- (void)applicationLibrary:(id)library _willNotify_didDemoteApplications:(id)applications completion:(id)completion;
- (void)applicationLibrary:(id)library _willNotify_didRemoveApplications:(id)applications completion:(id)completion;
- (void)applicationLibrary:(id)library _willNotify_didReplaceApplications:(id)applications withApplications:(id)applications3 completion:(id)completion;
@end

