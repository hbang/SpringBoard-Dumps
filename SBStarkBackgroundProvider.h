/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkBackgroundProvider : XXUnknownSuperclass {
	NSString *_serviceName;
	NSString *_viewControllerClassName;
	unsigned _priority;
}
@property(readonly, assign, nonatomic) unsigned priority;
@property(readonly, assign, nonatomic) NSString *serviceName;
@property(readonly, assign, nonatomic) NSString *viewControllerClassName;
- (id)initWithServiceName:(id)serviceName options:(id)options;
- (id)initWithServiceName:(id)serviceName viewControllerClassName:(id)name priority:(unsigned)priority;
- (void)dealloc;
- (id)description;
@end

