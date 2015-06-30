/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SBWidgetHandling <NSObject>
@property(readonly, assign, nonatomic) NSSet *visibleWidgetIDs;
- (void)enableAllWidgets:(id)widgets;
- (void)makeVisibleWidgetWithIdentifier:(id)identifier animated:(BOOL)animated completion:(id)completion;
- (BOOL)shouldRequestWidgetRemoteViewControllers;
- (void)updateWidgetsWithIdentifiers:(id)identifiers launchStats:(id)stats completion:(id)completion;
- (id)widgetWithIdentifier:(id)identifier;
@end

