# Created by: Juergen Lock <nox@FreeBSD.org>
# $FreeBSD: head/multimedia/vdr-plugin-skinenigmang/Makefile 507372 2019-07-26 20:46:53Z gerald $

PORTNAME=	vdr-plugin-skinenigmang
PORTVERSION=	0.1.2s20120606
PORTREVISION=	4
CATEGORIES=	multimedia
MASTER_SITES=	http://andreas.vdr-developer.org/enigmang/download/:release \
		LOCAL/nox:snapshot
DISTNAME=	${PORTNAME}-${DISTVERSIONPREFIX}${DISTVERSION}${DISTVERSIONSUFFIX}
DISTFILES=	${DISTNAME}.tar.bz2:snapshot \
		skinenigmang-logos-xpm-hi-20070702.tgz:release

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Video Disk Recorder - Enigma-NG skin plugin

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

PATCH_STRIP=	-p1
WRKSRC=		${WRKDIR}/${PORTNAME}

PORTDOCS=	README HISTORY

OPTIONS_DEFINE=	DOCS NLS

.include	"${.CURDIR}/../vdr/Makefile.plugins"

post-patch: post-patch-plugin

pre-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/vdr

post-install: post-install-pluginlocales
	(cd ${WRKDIR}/${PLUGIN} && \
		${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/etc/vdr/plugins/${PLUGIN} )

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
