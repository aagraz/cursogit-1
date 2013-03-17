//
//  GitEvento.h
//  cursogit
//
//  Created by Alfonso Alba on 16/03/13.
//  Copyright (c) 2013 Alfonso Alba. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GitEvento : NSObject

@property (nonatomic, strong) NSDate *fecha;
@property (nonatomic, strong) NSDate *nombre;
@property (nonatomic, strong) NSDate *lugar;

@end
