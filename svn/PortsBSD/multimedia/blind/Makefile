# $FreeBSD: head/multimedia/blind/Makefile 460326 2018-01-29 19:21:21Z yuri $

PORTNAME=	blind
DISTVERSION=	1.1
CATEGORIES=	multimedia
MASTER_SITES=	https://dl.suckless.org/tools/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Collection of command line video editing utilities

LICENSE=	ISC
LICENSE_GROUPS=	FSF GPL OSI
LICENSE_NAME=	ISC License
LICENSE_FILE=	${WRKSRC}/LICENSE
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

USES=		gmake  # because of a bug in the makefiles: suckless is supposed to have POSIX makefiles

.include <bsd.port.mk>
