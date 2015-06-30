/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBMappedImageCache : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue> *_queue;
	NSString *_path;
	NSMutableDictionary *_images;
}
+ (id)imageNamed:(id)named;
+ (id)imageNamed:(id)named options:(int)options;
+ (id)persistentCache;
+ (id)sessionCache;
- (id)initWithPath:(id)path;
- (void)dealloc;
- (id)imageForKey:(id)key;
- (id)imageForKey:(id)key generateImageWithBlockIfNecessary:(id)blockIfNecessary;
- (id)imageForKey:(id)key options:(int)options;
- (id)imageForKey:(id)key options:(int)options generateImageWithBlockIfNecessary:(id)blockIfNecessary;
- (void)removeAllObjects;
- (void)removeImageForKey:(id)key;
- (void)setImage:(id)image forKey:(id)key;
- (void)warmupImageForKey:(id)key;
@end

