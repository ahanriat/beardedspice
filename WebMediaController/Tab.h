//
//  Tab.h
//  WebMediaController
//
//  Created by Jose Falcon on 12/10/13.
//  Copyright (c) 2013 Tyler Rhodes / Jose Falcon. All rights reserved.
//

@protocol Tab

-(id) executeJavascript:(NSString *) javascript;
-(NSString *) title;
-(NSString *) URL;

@end