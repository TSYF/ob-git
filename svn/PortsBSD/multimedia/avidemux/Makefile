# Created by: Anish Mistry (with help from mean)
# $FreeBSD: head/multimedia/avidemux/Makefile 550292 2020-09-27 17:49:35Z tcberner $
# assuming freebsd always has 16 byte aligned malloc as macos does. is this true?
# nls files not getting installed with nls=on. are they getting built?
# sync port options with current software options

PORTNAME=	avidemux
PORTVERSION=	${AVIDEMUX_VERSION}
PORTREVISION=	0
CATEGORIES=	multimedia

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Simple GUI based video editor

.include "${.CURDIR}/Makefile.common"

CMAKE_SOURCE_PATH=	${WRKSRC}/avidemux_core

post-configure: post-configure-common

.include <bsd.port.post.mk>
