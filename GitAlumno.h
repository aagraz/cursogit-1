//
//  GitAlumno.h
//  cursogit
//
//  Created by Alfonso Alba on 16/03/13.
//  Copyright (c) 2013 Alfonso Alba. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GitAlumno : NSObject

@property (nonatomic, strong) NSString *nombre;
@property (nonatomic, strong) NSString *apellidos;
@property (nonatomic, strong) NSNumber *telefono;
@property (nonatomic, strong) NSString *direccion;
@property (nonatomic, assign) BOOL esRegistered;

- (NSArray *)eventos;

@end
