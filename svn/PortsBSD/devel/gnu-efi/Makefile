# Created by: Edward Tomasz Napierala <trasz@FreeBSD.org>
# $FreeBSD: head/devel/gnu-efi/Makefile 569299 2021-03-27 07:33:08Z egypcio $

PORTNAME=	gnu-efi
PORTVERSION=	3.0.13
CATEGORIES=	devel
MASTER_SITES=	SF/gnu-efi

MAINTAINER=	egypcio@FreeBSD.org
COMMENT=	SDK for EFI applications

LICENSE=	GPLv2

ONLY_FOR_ARCHS=	amd64 i386

BUILD_DEPENDS=	${LOCALBASE}/bin/ar:devel/binutils

USES=		compiler:c++11-lib gmake tar:bz2

CFLAGS+=	-fPIC
CPPFLAGS+=	-fPIC
MAKE_ARGS+=	CC=${CC} HOSTCC=${CC} AR=${AR}

.include <bsd.port.pre.mk>

.if ${ARCH} == amd64
PLIST_SUB+=	ARCH_amd64="" ARCH_i386="@comment "
.elif ${ARCH} == i386
PLIST_SUB+=	ARCH_i386="" ARCH_amd64="@comment "
.endif

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/*.o

.include <bsd.port.post.mk>
