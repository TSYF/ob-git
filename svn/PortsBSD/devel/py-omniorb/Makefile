# Created by: Johann Visagie <johann@egenetics.com>
# $FreeBSD: head/devel/py-omniorb/Makefile 531186 2020-04-09 07:25:27Z bofh $

PORTNAME=	omniorb
DISTVERSION=	4.2.4
CATEGORIES=	devel python
MASTER_SITES=	SF/${PORTNAME}/omniORBpy/omniORBpy-${DISTVERSION:S/-2//}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	omniORBpy-${DISTVERSION}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Python bindings for omniORB4, a CORBA 2.6 ORB

LICENSE=	LGPL21

LIB_DEPENDS=	libomniORB4.so:devel/omniORB
RUN_DEPENDS=	omniidl:devel/omniORB
# parts of omniORB4 source tree is required to build omniORBpy;
# see also the "post-extract" target below.
BUILD_DEPENDS=	${NONEXISTENT}:devel/omniORB:patch

USES=		gmake python shebangfix ssl tar:bzip2
USE_PYTHON=	py3kplist

CONFLICTS=	py*-orbit-2* ${PYTHON_PKGNAMEPREFIX}omniorb3-3*

OPTIONS_DEFINE=	DOCS EXAMPLES

PLIST_SUB=	SONUM=2

WRKSRC=		${WRKDIR}/${DISTNAME:S/-2//}
OMNIORB_WRKSRC=	cd ${.CURDIR}/../omniORB && ${MAKE} -V WRKSRC

GNU_CONFIGURE=	yes
CONFIGURE_OUTSOURCE=	yes
MAKEFILE=	GNUmakefile
SHEBANG_FILES=	examples/tests/*.py examples/poa/*.py \
		examples/fortune/*.py examples/embed/*.py \
		examples/valuetype/tests/*.py \
		examples/valuetype/simple/*.py \
		examples/ami/*.py \
		examples/echo/*.py

CONFIGURE_ENV+=	PYTHON=${PYTHON_CMD}
CONFIGURE_ARGS=	--with-openssl=${OPENSSLBASE} --with-omniorb=${LOCALBASE}

pre-configure:
	@cd $$(${OMNIORB_WRKSRC}) && ${FIND} idl | ${CPIO} --quiet -pdum ${WRKSRC}

post-install:
	cd ${STAGEDIR}${PYTHON_SITELIBDIR} && ${PYTHON_CMD} -c "import py_compile;py_compile.compile('CosNaming/__init__.py',None,'CosNaming/__init__.pyc',True)"
	cd ${STAGEDIR}${PYTHON_SITELIBDIR} && ${PYTHON_CMD} -c "import py_compile;py_compile.compile('CosNaming__POA/__init__.py',None,'CosNaming__POA/__init__.pyc',True)"
	cd ${STAGEDIR}${PYTHON_SITELIBDIR} && ${PYTHON_CMD} -c "import py_compile;py_compile.compile('omniidl_be/python.py',None,'omniidl_be/python.pyc',True)"
	@${RM} ${STAGEDIR}${PYTHON_SITELIBDIR}/omniidl_be/__init__.py* \
		${STAGEDIR}${PYTHON_SITELIBDIR}/omniidl_be/__pycache__/__init__.*

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}/html
	@${MKDIR} ${STAGEDIR}${DOCSDIR}/tex
	${INSTALL_DATA} ${WRKSRC}/doc/omniORBpy.* ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/omniORBpy/* ${STAGEDIR}${DOCSDIR}/html
	${INSTALL_DATA} ${WRKSRC}/doc/tex/* ${STAGEDIR}${DOCSDIR}/tex

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	cd ${WRKSRC}/examples && ${FIND} . \
	  | ${CPIO} --quiet -pdum -R ${SHAREOWN}:${SHAREGRP} ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
