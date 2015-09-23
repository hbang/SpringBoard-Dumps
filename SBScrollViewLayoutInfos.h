/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBScrollViewLayoutInfos : XXUnknownSuperclass {
	NSDictionary *_indexPathsToFrames;
	NSDictionary *_sectionToNumberOfItems;
	NSDictionary *_sectionToPlaceholderFrames;
	float _contentWidth;
	float _presentationOffset;
	int _numberOfSections;
}
@property(assign, nonatomic) float contentWidth;
@property(retain, nonatomic) NSDictionary *indexPathsToFrames;
@property(assign, nonatomic) int numberOfSections;
@property(assign, nonatomic) float presentationOffset;
@property(retain, nonatomic) NSDictionary *sectionToNumberOfItems;
@property(retain, nonatomic) NSDictionary *sectionToPlaceholderFrames;
- (void)dealloc;
- (CGRect)frameForIndexPath:(id)indexPath;
- (CGRect)frameForSectionPlaceholder:(int)sectionPlaceholder;
- (unsigned)indexOfLastItemInSection:(unsigned)section;
- (id)indexPathsOfVisibleItemsInBounds:(CGRect)bounds;
- (unsigned)numberOfItemsInSection:(unsigned)section;
@end
