# $FreeBSD: head/multimedia/ptx-kmod/Makefile 561778 2021-01-17 01:27:11Z pkubaj $

PORTNAME=	ptx
PORTVERSION=	0.0.20111212
PORTREVISION=	2
CATEGORIES=	multimedia
MASTER_SITES=	LOCAL/hrs
PKGNAMESUFFIX=	-kmod
DISTNAME=	${PORTNAME}-${PORTVERSION:S,0.0.,,}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Device driver for PT1/PT2 ISDB-S/T tuner cards

LICENSE=	GPLv3

ONLY_FOR_ARCHS=	amd64 i386 powerpc64 powerpc64le

USES=		kmod shebangfix
SHEBANG_FILES=	tools/recptx.pl
USE_RC_SUBR=	ptx

BUILD_WRKSRC=	${WRKSRC}/dev/ptx
PLIST_FILES=	${KMODDIR}/ptx.ko bin/recptx.pl
SUB_LIST=	KMODDIR=${KMODDIR}
PORTDOCS=	README

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_KLD} ${BUILD_WRKSRC}/ptx.ko ${STAGEDIR}${KMODDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/tools/recptx.pl ${STAGEDIR}${PREFIX}/bin

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
