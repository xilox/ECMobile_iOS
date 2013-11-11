//
//	 ______    ______    ______
//	/\  __ \  /\  ___\  /\  ___\
//	\ \  __<  \ \  __\_ \ \  __\_
//	 \ \_____\ \ \_____\ \ \_____\
//	  \/_____/  \/_____/  \/_____/
//
//
//	Copyright (c) 2013-2014, {Bee} open source community
//	http://www.bee-framework.com
//
//
//	Permission is hereby granted, free of charge, to any person obtaining a
//	copy of this software and associated documentation files (the "Software"),
//	to deal in the Software without restriction, including without limitation
//	the rights to use, copy, modify, merge, publish, distribute, sublicense,
//	and/or sell copies of the Software, and to permit persons to whom the
//	Software is furnished to do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in
//	all copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//	IN THE SOFTWARE.
//

#if (TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR)

#import "Bee_UIQuery.h"

#pragma mark -

@interface BeeUIQuery(Offset)

@property (nonatomic, readonly) CGFloat					left;
@property (nonatomic, readonly) CGFloat					top;
@property (nonatomic, readonly) CGFloat					bottom;
@property (nonatomic, readonly) CGFloat					right;

@property (nonatomic, readonly) CGPoint					offset;
@property (nonatomic, readonly) CGPoint					position;

@property (nonatomic, readonly) BeeUIQueryObjectBlockF	LEFT;
@property (nonatomic, readonly) BeeUIQueryObjectBlockF	TOP;
@property (nonatomic, readonly) BeeUIQueryObjectBlockF	BOTTOM;
@property (nonatomic, readonly) BeeUIQueryObjectBlockF	RIGHT;

@property (nonatomic, readonly) BeeUIQueryObjectBlockFF	OFFSET;
@property (nonatomic, readonly) BeeUIQueryObjectBlockFF	POSITION;

@end

#endif	// #if (TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR)