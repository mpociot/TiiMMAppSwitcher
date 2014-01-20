/**
 * Your Copyright Here
 *
 * Appcelerator Titanium is Copyright (c) 2009-2010 by Appcelerator, Inc.
 * and licensed under the Apache Public License (version 2)
 */
#import "TiModule.h"
#import "MMAppSwitcher.h"

@interface DeMarcelpociotMmappswitcherModule : TiModule <MMAppSwitcherDataSource>
{
    UIView *switchView;
}

-(UIView *)appSwitcher:(MMAppSwitcher *)appSwitcher viewForCardWithSize:(CGSize)size;

@end
