/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Symbolication/VMULoadCommand.h>

@class NSArray, NSString;

@interface VMUSegmentLoadCommand : VMULoadCommand
{
    NSString *_name;
    unsigned long long _vmaddr;
    unsigned long long _vmsize;
    unsigned long long _fileoff;
    unsigned long long _filesize;
    int _maxprot;
    int _initprot;
    unsigned int _flags;
    NSArray *_sections;
}

- (void)dealloc;
- (id)description;
- (id)sectionNamed:(id)arg1;
- (id)sections;
- (unsigned int)flags;
- (int)initprot;
- (int)maxprot;
- (unsigned long long)filesize;
- (unsigned long long)fileoff;
- (unsigned long long)vmsize;
- (unsigned long long)vmaddr;
- (id)name;
- (BOOL)isSegment;

@end

