# Created by: Juergen Lock <nox@FreeBSD.org>
# $FreeBSD: head/multimedia/vdr-plugin-sleeptimer/Makefile 507372 2019-07-26 20:46:53Z gerald $

PORTNAME=	vdr-plugin-sleeptimer
PORTVERSION=	0.8.2
PORTREVISION=	8
CATEGORIES=	multimedia
MASTER_SITES=	http://projects.vdr-developer.org/attachments/download/652/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Video Disk Recorder - sleep timer plugin

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		tar:tgz
PATCH_STRIP=	-p1
WRKSRC=		${WRKDIR}/${PLUGIN}-${PORTVERSION}

PORTDOCS=	README HISTORY

OPTIONS_DEFINE=	DOCS NLS

.include	"${.CURDIR}/../vdr/Makefile.plugins"

post-patch: post-patch-plugin

pre-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/vdr

post-install: post-install-pluginlocales

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
