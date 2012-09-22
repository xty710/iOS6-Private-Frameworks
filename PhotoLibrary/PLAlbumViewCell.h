/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class NSMutableArray, NSMutableIndexSet, PLUnreadMarkerView;

@interface PLAlbumViewCell : UITableViewCell
{
    struct CGSize _cellPhotoSize;
    struct CGSize _cellPhotoThumbnailSize;
    struct CGPoint _cellPhotoThumbnailOffset;
    unsigned int _cellPhotoCount;
    struct CGImage *_cellsImage;
    BOOL _usesViewBasedPhotoCells;
    NSMutableArray *_photoCellViews;
    NSMutableIndexSet *_selectionIndexes;
    NSMutableIndexSet *_activityIndexes;
    NSMutableArray *_highlightViews;
    NSMutableArray *_imageBadgeViews;
    NSMutableArray *_textBadgeViews;
    int _selectionStyle;
    unsigned int _unreadStartMarkerIndex;
    PLUnreadMarkerView *_unreadStartMarkerView;
    unsigned int _unreadStartMarkerCount;
    BOOL _unreadStartMarkerShowsProgress;
}

+ (struct CGRect)frameOfPhotoThumbnailAtIndex:(unsigned int)arg1 cellBounds:(struct CGRect)arg2 cellPhotoSize:(struct CGSize)arg3 thumbnailSize:(struct CGSize)arg4 thumbnailOffset:(struct CGPoint)arg5;
+ (struct CGRect)frameOfCellPhotoAtIndex:(unsigned int)arg1 cellBounds:(struct CGRect)arg2 cellPhotoSize:(struct CGSize)arg3;
+ (unsigned int)cellPhotoIndexAtPoint:(struct CGPoint)arg1 cellBounds:(struct CGRect)arg2 cellPhotoSize:(struct CGSize)arg3;
@property(nonatomic) BOOL unreadStartMarkerShowsProgress; // @synthesize unreadStartMarkerShowsProgress=_unreadStartMarkerShowsProgress;
@property(nonatomic) unsigned int unreadStartMarkerIndex; // @synthesize unreadStartMarkerIndex=_unreadStartMarkerIndex;
@property(nonatomic) unsigned int unreadStartMarkerCount; // @synthesize unreadStartMarkerCount=_unreadStartMarkerCount;
@property(nonatomic) BOOL usesViewBasedPhotoCells; // @synthesize usesViewBasedPhotoCells=_usesViewBasedPhotoCells;
@property(nonatomic) unsigned int cellPhotoCount; // @synthesize cellPhotoCount=_cellPhotoCount;
@property(nonatomic) struct CGPoint cellPhotoThumbnailOffset; // @synthesize cellPhotoThumbnailOffset=_cellPhotoThumbnailOffset;
@property(nonatomic) struct CGSize cellPhotoThumbnailSize; // @synthesize cellPhotoThumbnailSize=_cellPhotoThumbnailSize;
@property(nonatomic) struct CGSize cellPhotoSize; // @synthesize cellPhotoSize=_cellPhotoSize;
- (void)setTextBadgeString:(id)arg1 onCellPhotoAtIndex:(unsigned int)arg2;
- (void)removeAllTextBadges;
- (void)_updateUnreadStartMarkerWithOldIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setUnreadStartMarkerShowsProgress:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUnreadStartMarkerIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)hideActivityOnCellPhotoAtIndex:(unsigned int)arg1;
- (void)showActivityOnCellPhotoAtIndex:(unsigned int)arg1;
- (void)_removeAllImageBadges;
- (id)badgeImageForCellPhotoAtIndex:(unsigned int)arg1;
- (void)setBadgeImage:(id)arg1 forCellPhotoAtIndex:(unsigned int)arg2;
- (void)_updateBadgeImageVisibilityForCellPhotoAtIndex:(unsigned int)arg1;
- (void)deselectCellPhotoAtIndex:(unsigned int)arg1;
@property(nonatomic) int photoSelectionStyle;
- (void)selectCellPhotoAtIndex:(unsigned int)arg1;
- (void)_removeAllHighlights;
- (void)_updateHighlightAndBadgeForCellPhotoAtIndex:(unsigned int)arg1;
- (void)_updateCellPhotoAtIndex:(unsigned int)arg1 highlighted:(BOOL)arg2 badgedWithImage:(id)arg3 showActivityIndicator:(BOOL)arg4;
- (void)_updatePhotoCells;
- (void)_removePhotoCellViews;
- (void)replaceCellPhotoViewAtIndex:(unsigned int)arg1 withCellPhotoView:(id)arg2;
- (id)removeCellPhotoViewAtIndex:(unsigned int)arg1;
- (id)viewOfCellPhotoAtIndex:(unsigned int)arg1;
- (struct CGRect)frameOfPhotoThumbnailAtIndex:(unsigned int)arg1;
- (struct CGRect)frameOfCellPhotoAtIndex:(unsigned int)arg1;
- (unsigned int)cellPhotoIndexAtPoint:(struct CGPoint)arg1;
- (void)setCGImageRef:(struct CGImage *)arg1;
- (struct CGImage *)cgImageRef;
- (void)prepareForReuse;
- (void)dealloc;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

