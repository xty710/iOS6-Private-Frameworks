/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, VGLFontAtlasPage;

@interface VGLFontAtlas : NSObject
{
    VGLFontAtlasPage *_currentPage;
    NSMutableArray *_pages;
    struct CGColor *_textColor;
    void *_image;
    struct CGContext *_renderContext;
    unsigned int _timestamp;
    unsigned int _workingSetSize;
    unsigned int _evictionStamp;
    struct list<VGLFontAtlasCell, boost::intrusive::none, boost::intrusive::none, boost::intrusive::none> _cellsInUseOrder;
}

@property(readonly, nonatomic) unsigned int evictionStamp; // @synthesize evictionStamp=_evictionStamp;
@property(readonly, nonatomic) unsigned int workingSetSize; // @synthesize workingSetSize=_workingSetSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dump:(char *)arg1;
- (void)_addImageToGlyph:(struct VGLFontGlyph_struct *)arg1;
- (struct VGLFontAtlasCell *)_allocCell;
- (struct VGLFontAtlasCell *)_allocCellFromAnyPage;
- (BOOL)_flushCells;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)commitGlyphs:(const vector_6f791529 *)arg1;
- (id)pageWithId:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int numGlyphs;
@property(readonly, nonatomic) unsigned int numPages;
- (void)finishFrame;
- (void)startFrameWithTimestamp:(unsigned int)arg1;
- (void)dealloc;
- (id)initOnlyFromFontManager;
- (id)init;

@end

