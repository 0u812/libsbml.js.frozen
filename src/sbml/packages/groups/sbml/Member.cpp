/**
 * @file:   Member.cpp
 * @brief:  Implementation of the Member class
 * @author: Generated by autocreate code
 *
 * <!--------------------------------------------------------------------------
 * This file is part of libSBML.  Please visit http://sbml.org for more
 * information about SBML, and the latest version of libSBML.
 *
 * Copyright (C) 2009-2013 jointly by the following organizations:
 *     1. California Institute of Technology, Pasadena, CA, USA
 *     2. EMBL European Bioinformatics Institute (EMBL-EBI), Hinxton, UK
 *
 * Copyright (C) 2006-2008 by the California Institute of Technology,
 *     Pasadena, CA, USA 
 *
 * Copyright (C) 2002-2005 jointly by the following organizations:
 *     1. California Institute of Technology, Pasadena, CA, USA
 *     2. Japan Science and Technology Agency, Japan
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation.  A copy of the license agreement is provided
 * in the file named "LICENSE.txt" included with this software distribution
 * and also available online as http://sbml.org/software/libsbml/license.html
 * ------------------------------------------------------------------------ -->
 */


#include <sbml/packages/groups/sbml/Member.h>
#include <sbml/packages/groups/validator/GroupsSBMLError.h>


using namespace std;


LIBSBML_CPP_NAMESPACE_BEGIN


/*
 * Creates a new Member with the given level, version, and package version.
 */
Member::Member (unsigned int level, unsigned int version, unsigned int pkgVersion)
  : SBase(level, version)
   ,mId ("")
   ,mName ("")
   ,mIdRef ("")
   ,mMetaIdRef ("")
{
  // set an SBMLNamespaces derived object of this package
  setSBMLNamespacesAndOwn(new GroupsPkgNamespaces(level, version, pkgVersion));
}


/*
 * Creates a new Member with the given GroupsPkgNamespaces object.
 */
Member::Member (GroupsPkgNamespaces* groupsns)
  : SBase(groupsns)
   ,mId ("")
   ,mName ("")
   ,mIdRef ("")
   ,mMetaIdRef ("")
{
  // set the element namespace of this object
  setElementNamespace(groupsns->getURI());

  // load package extensions bound with this object (if any) 
  loadPlugins(groupsns);
}


/*
 * Copy constructor for Member.
 */
Member::Member (const Member& orig)
  : SBase(orig)
{
  if (&orig == NULL)
  {
    throw SBMLConstructorException("Null argument to copy constructor");
  }
  else
  {
    mId  = orig.mId;
    mName  = orig.mName;
    mIdRef  = orig.mIdRef;
    mMetaIdRef  = orig.mMetaIdRef;
  }
}


/*
 * Assignment for Member.
 */
Member&
Member::operator=(const Member& rhs)
{
  if (&rhs == NULL)
  {
    throw SBMLConstructorException("Null argument to assignment");
  }
  else if (&rhs != this)
  {
    SBase::operator=(rhs);
    mId  = rhs.mId;
    mName  = rhs.mName;
    mIdRef  = rhs.mIdRef;
    mMetaIdRef  = rhs.mMetaIdRef;
  }
  return *this;
}


/*
 * Clone for Member.
 */
Member*
Member::clone () const
{
  return new Member(*this);
}


/*
 * Destructor for Member.
 */
Member::~Member ()
{
}


/*
 * Returns the value of the "id" attribute of this Member.
 */
const std::string&
Member::getId() const
{
  return mId;
}


/*
 * Returns the value of the "name" attribute of this Member.
 */
const std::string&
Member::getName() const
{
  return mName;
}


/*
 * Returns the value of the "idRef" attribute of this Member.
 */
const std::string&
Member::getIdRef() const
{
  return mIdRef;
}


/*
 * Returns the value of the "metaIdRef" attribute of this Member.
 */
const std::string&
Member::getMetaIdRef() const
{
  return mMetaIdRef;
}


/*
 * Returns true/false if id is set.
 */
bool
Member::isSetId() const
{
  return (mId.empty() == false);
}


/*
 * Returns true/false if name is set.
 */
bool
Member::isSetName() const
{
  return (mName.empty() == false);
}


/*
 * Returns true/false if idRef is set.
 */
bool
Member::isSetIdRef() const
{
  return (mIdRef.empty() == false);
}


/*
 * Returns true/false if metaIdRef is set.
 */
bool
Member::isSetMetaIdRef() const
{
  return (mMetaIdRef.empty() == false);
}


/*
 * Sets id and returns value indicating success.
 */
int
Member::setId(const std::string& id)
{
  return SyntaxChecker::checkAndSetSId(id, mId);
}


/*
 * Sets name and returns value indicating success.
 */
int
Member::setName(const std::string& name)
{
  if (&(name) == NULL)
  {
    return LIBSBML_INVALID_ATTRIBUTE_VALUE;
  }
  else
  {
    mName = name;
    return LIBSBML_OPERATION_SUCCESS;
  }
}


/*
 * Sets idRef and returns value indicating success.
 */
int
Member::setIdRef(const std::string& idRef)
{
  if (&(idRef) == NULL)
  {
    return LIBSBML_INVALID_ATTRIBUTE_VALUE;
  }
  else if (!(SyntaxChecker::isValidInternalSId(idRef)))
  {
    return LIBSBML_INVALID_ATTRIBUTE_VALUE;
  }
  else
  {
    mIdRef = idRef;
    return LIBSBML_OPERATION_SUCCESS;
  }
}


/*
 * Sets metaIdRef and returns value indicating success.
 */
int
Member::setMetaIdRef(const std::string& metaIdRef)
{
  if (&(metaIdRef) == NULL)
  {
    return LIBSBML_INVALID_ATTRIBUTE_VALUE;
  }
  else
  {
    mMetaIdRef = metaIdRef;
    return LIBSBML_OPERATION_SUCCESS;
  }
}


/*
 * Unsets id and returns value indicating success.
 */
int
Member::unsetId()
{
  mId.erase();

  if (mId.empty() == true)
  {
    return LIBSBML_OPERATION_SUCCESS;
  }
  else
  {
    return LIBSBML_OPERATION_FAILED;
  }
}


/*
 * Unsets name and returns value indicating success.
 */
int
Member::unsetName()
{
  mName.erase();

  if (mName.empty() == true)
  {
    return LIBSBML_OPERATION_SUCCESS;
  }
  else
  {
    return LIBSBML_OPERATION_FAILED;
  }
}


/*
 * Unsets idRef and returns value indicating success.
 */
int
Member::unsetIdRef()
{
  mIdRef.erase();

  if (mIdRef.empty() == true)
  {
    return LIBSBML_OPERATION_SUCCESS;
  }
  else
  {
    return LIBSBML_OPERATION_FAILED;
  }
}


/*
 * Unsets metaIdRef and returns value indicating success.
 */
int
Member::unsetMetaIdRef()
{
  mMetaIdRef.erase();

  if (mMetaIdRef.empty() == true)
  {
    return LIBSBML_OPERATION_SUCCESS;
  }
  else
  {
    return LIBSBML_OPERATION_FAILED;
  }
}


/*
 * Returns the XML element name of this object
 */
const std::string&
Member::getElementName () const
{
  static const string name = "member";
  return name;
}


/*
 * Returns the libSBML type code for this SBML object.
 */
int
Member::getTypeCode () const
{
  return SBML_GROUPS_MEMBER;
}


/*
 * check if all the required attributes are set
 */
bool
Member::hasRequiredAttributes () const
{
  bool allPresent = true;

  return allPresent;
}


  /** @cond doxygenLibsbmlInternal */

/*
 * write contained elements
 */
void
Member::writeElements (XMLOutputStream& stream) const
{
  SBase::writeElements(stream);

  SBase::writeExtensionElements(stream);
}


  /** @endcond doxygenLibsbmlInternal */


  /** @cond doxygenLibsbmlInternal */

/*
 * Accepts the given SBMLVisitor.
 */
bool
Member::accept (SBMLVisitor& v) const
{
  return v.visit(*this);
}


  /** @endcond doxygenLibsbmlInternal */


  /** @cond doxygenLibsbmlInternal */

/*
 * Sets the parent SBMLDocument.
 */
void
Member::setSBMLDocument (SBMLDocument* d)
{
  SBase::setSBMLDocument(d);
}


  /** @endcond doxygenLibsbmlInternal */


  /** @cond doxygenLibsbmlInternal */

/*
 * Enables/Disables the given package with this element.
 */
void
Member::enablePackageInternal(const std::string& pkgURI,
             const std::string& pkgPrefix, bool flag)
{
  SBase::enablePackageInternal(pkgURI, pkgPrefix, flag);
}


  /** @endcond doxygenLibsbmlInternal */


  /** @cond doxygenLibsbmlInternal */

/*
 * Get the list of expected attributes for this element.
 */
void
Member::addExpectedAttributes(ExpectedAttributes& attributes)
{
  SBase::addExpectedAttributes(attributes);

  attributes.add("id");
  attributes.add("name");
  attributes.add("idRef");
  attributes.add("metaIdRef");
}


  /** @endcond doxygenLibsbmlInternal */


  /** @cond doxygenLibsbmlInternal */

/*
 * Read values from the given XMLAttributes set into their specific fields.
 */
void
Member::readAttributes (const XMLAttributes& attributes,
                             const ExpectedAttributes& expectedAttributes)
{
  const unsigned int sbmlLevel   = getLevel  ();
  const unsigned int sbmlVersion = getVersion();

  unsigned int numErrs;

  /* look to see whether an unknown attribute error was logged
   * during the read of the listOfMembers - which will have
   * happened immediately prior to this read
  */

  if (getErrorLog() != NULL &&
      static_cast<ListOfMembers*>(getParentSBMLObject())->size() < 2)
  {
    numErrs = getErrorLog()->getNumErrors();
    for (int n = numErrs-1; n >= 0; n--)
    {
      if (getErrorLog()->getError(n)->getErrorId() == UnknownPackageAttribute)
      {
        const std::string details =
              getErrorLog()->getError(n)->getMessage();
        getErrorLog()->remove(UnknownPackageAttribute);
        getErrorLog()->logPackageError("groups", GroupsUnknownError,
                  getPackageVersion(), sbmlLevel, sbmlVersion, details);
      }
      else if (getErrorLog()->getError(n)->getErrorId() == UnknownCoreAttribute)
      {
        const std::string details =
                   getErrorLog()->getError(n)->getMessage();
        getErrorLog()->remove(UnknownCoreAttribute);
        getErrorLog()->logPackageError("groups", UnknownError,
                  getPackageVersion(), sbmlLevel, sbmlVersion, details);
      }
    }
  }

  SBase::readAttributes(attributes, expectedAttributes);

  // look to see whether an unknown attribute error was logged
  if (getErrorLog() != NULL)
  {
    numErrs = getErrorLog()->getNumErrors();
    for (int n = numErrs-1; n >= 0; n--)
    {
      if (getErrorLog()->getError(n)->getErrorId() == UnknownPackageAttribute)
      {
        const std::string details =
                          getErrorLog()->getError(n)->getMessage();
        getErrorLog()->remove(UnknownPackageAttribute);
        getErrorLog()->logPackageError("groups", UnknownError,
                       getPackageVersion(), sbmlLevel, sbmlVersion, details);
      }
      else if (getErrorLog()->getError(n)->getErrorId() == UnknownCoreAttribute)
      {
        const std::string details =
                          getErrorLog()->getError(n)->getMessage();
        getErrorLog()->remove(UnknownCoreAttribute);
        getErrorLog()->logPackageError("groups", UnknownError,
                       getPackageVersion(), sbmlLevel, sbmlVersion, details);
      }
    }
  }

  bool assigned = false;

  //
  // id SId  ( use = "optional" )
  //
  assigned = attributes.readInto("id", mId);

   if (assigned == true)
  {
    // check string is not empty and correct syntax

    if (mId.empty() == true)
    {
      logEmptyString(mId, getLevel(), getVersion(), "<Member>");
    }
    else if (SyntaxChecker::isValidSBMLSId(mId) == false)
    {
      logError(InvalidIdSyntax);
    }
  }

  //
  // name string   ( use = "optional" )
  //
  assigned = attributes.readInto("name", mName);

  if (assigned == true)
  {
    // check string is not empty

    if (mName.empty() == true)
    {
      logEmptyString(mName, getLevel(), getVersion(), "<Member>");
    }
  }

  //
  // idRef SIdRef   ( use = "optional" )
  //
  assigned = attributes.readInto("idRef", mIdRef);

  if (assigned == true)
  {
    // check string is not empty and correct syntax

    if (mIdRef.empty() == true)
    {
      logEmptyString(mIdRef, getLevel(), getVersion(), "<Member>");
    }
    else if (SyntaxChecker::isValidSBMLSId(mIdRef) == false)
    {
      logError(InvalidIdSyntax, getLevel(), getVersion(), 
        "The syntax of the attribute idRef='" + mIdRef + "' does not conform.");
    }
  }

  //
  // metaIdRef string   ( use = "optional" )
  //
  assigned = attributes.readInto("metaIdRef", mMetaIdRef);

  if (assigned == true)
  {
    // check string is not empty

    if (mMetaIdRef.empty() == true)
    {
      logEmptyString(mMetaIdRef, getLevel(), getVersion(), "<Member>");
    }
  }

}


  /** @endcond doxygenLibsbmlInternal */


  /** @cond doxygenLibsbmlInternal */

/*
 * Write values of XMLAttributes to the output stream.
 */
  void
Member::writeAttributes (XMLOutputStream& stream) const
{
  SBase::writeAttributes(stream);

  if (isSetId() == true)
    stream.writeAttribute("id", getPrefix(), mId);

  if (isSetName() == true)
    stream.writeAttribute("name", getPrefix(), mName);

  if (isSetIdRef() == true)
    stream.writeAttribute("idRef", getPrefix(), mIdRef);

  if (isSetMetaIdRef() == true)
    stream.writeAttribute("metaIdRef", getPrefix(), mMetaIdRef);

  SBase::writeExtensionAttributes(stream);

}


  /** @endcond doxygenLibsbmlInternal */


/*
 * Constructor 
 */
ListOfMembers::ListOfMembers(unsigned int level, 
                unsigned int version, 
                unsigned int pkgVersion)
 : ListOf(level, version)
{
  setSBMLNamespacesAndOwn(new GroupsPkgNamespaces(level, version, pkgVersion)); 
}


/*
 * Constructor 
 */
ListOfMembers::ListOfMembers(GroupsPkgNamespaces* groupsns)
  : ListOf(groupsns)
{
  setElementNamespace(groupsns->getURI());
}


/*
 * Returns a deep copy of this ListOfMembers 
 */
ListOfMembers* 
ListOfMembers::clone () const
 {
  return new ListOfMembers(*this);
}


/*
 * Get a Member from the ListOfMembers by index.
*/
Member*
ListOfMembers::get(unsigned int n)
{
  return static_cast<Member*>(ListOf::get(n));
}


/*
 * Get a Member from the ListOfMembers by index.
 */
const Member*
ListOfMembers::get(unsigned int n) const
{
  return static_cast<const Member*>(ListOf::get(n));
}


/*
 * Get a Member from the ListOfMembers by id.
 */
Member*
ListOfMembers::get(const std::string& sid)
{
  return const_cast<Member*>(
    static_cast<const ListOfMembers&>(*this).get(sid));
}


/*
 * Get a Member from the ListOfMembers by id.
 */
const Member*
ListOfMembers::get(const std::string& sid) const
{
  vector<SBase*>::const_iterator result;

  result = find_if( mItems.begin(), mItems.end(), IdEq<Member>(sid) );
  return (result == mItems.end()) ? 0 : static_cast <Member*> (*result);
}


/*
 * Removes the nth Member from this ListOfMembers
 */
Member*
ListOfMembers::remove(unsigned int n)
{
  return static_cast<Member*>(ListOf::remove(n));
}


/*
 * Removes the Member from this ListOfMembers with the given identifier
 */
Member*
ListOfMembers::remove(const std::string& sid)
{
  SBase* item = NULL;
  vector<SBase*>::iterator result;

  result = find_if( mItems.begin(), mItems.end(), IdEq<Member>(sid) );

  if (result != mItems.end())
  {
    item = *result;
    mItems.erase(result);
  }

  return static_cast <Member*> (item);
}


/*
 * Returns the XML element name of this object
 */
const std::string&
ListOfMembers::getElementName () const
{
  static const string name = "listOfMembers";
  return name;
}


/*
 * Returns the libSBML type code for this SBML object.
 */
int
ListOfMembers::getTypeCode () const
{
  return SBML_LIST_OF;
}


/*
 * Returns the libSBML type code for the objects in this LIST_OF.
 */
int
ListOfMembers::getItemTypeCode () const
{
  return SBML_GROUPS_MEMBER;
}


  /** @cond doxygenLibsbmlInternal */

/*
 * Creates a new Member in this ListOfMembers
 */
SBase*
ListOfMembers::createObject(XMLInputStream& stream)
{
  const std::string& name   = stream.peek().getName();
  SBase* object = NULL;

  if (name == "member")
  {
    GROUPS_CREATE_NS(groupsns, getSBMLNamespaces());
    object = new Member(groupsns);
    appendAndOwn(object);
    delete groupsns;
  }

  return object;
}


  /** @endcond doxygenLibsbmlInternal */


  /** @cond doxygenLibsbmlInternal */

/*
 * Write the namespace for the Groups package.
 */
void
ListOfMembers::writeXMLNS(XMLOutputStream& stream) const
{
  XMLNamespaces xmlns;

  std::string prefix = getPrefix();

  if (prefix.empty())
  {
    XMLNamespaces* thisxmlns = getNamespaces();
    if (thisxmlns && thisxmlns->hasURI(GroupsExtension::getXmlnsL3V1V1()))
    {
      xmlns.add(GroupsExtension::getXmlnsL3V1V1(),prefix);
    }
  }

  stream << xmlns;
}


  /** @endcond doxygenLibsbmlInternal */


/**
 * write comments
 */
LIBSBML_EXTERN
Member_t *
Member_create(unsigned int level, unsigned int version,
              unsigned int pkgVersion)
{
  return new Member(level, version, pkgVersion);
}


/**
 * write comments
 */
LIBSBML_EXTERN
void
Member_free(Member_t * m)
{
  if (m != NULL)
    delete m;
}


/**
 * write comments
 */
LIBSBML_EXTERN
Member_t *
Member_clone(Member_t * m)
{
  if (m != NULL)
  {
    return static_cast<Member_t*>(m->clone());
  }
  else
  {
    return NULL;
  }
}


/**
 * write comments
 */
LIBSBML_EXTERN
char *
Member_getId(Member_t * m)
{
  if (m == NULL)
    return NULL;

  return m->getId().empty() ? NULL : safe_strdup(m->getId().c_str());
}


/**
 * write comments
 */
LIBSBML_EXTERN
char *
Member_getName(Member_t * m)
{
  if (m == NULL)
    return NULL;

  return m->getName().empty() ? NULL : safe_strdup(m->getName().c_str());
}


/**
 * write comments
 */
LIBSBML_EXTERN
char *
Member_getIdRef(Member_t * m)
{
  if (m == NULL)
    return NULL;

  return m->getIdRef().empty() ? NULL : safe_strdup(m->getIdRef().c_str());
}


/**
 * write comments
 */
LIBSBML_EXTERN
char *
Member_getMetaIdRef(Member_t * m)
{
  if (m == NULL)
    return NULL;

  return m->getMetaIdRef().empty() ? NULL : safe_strdup(m->getMetaIdRef().c_str());
}


/**
 * write comments
 */
LIBSBML_EXTERN
int
Member_isSetId(Member_t * m)
{
  return (m != NULL) ? static_cast<int>(m->isSetId()) : 0;
}


/**
 * write comments
 */
LIBSBML_EXTERN
int
Member_isSetName(Member_t * m)
{
  return (m != NULL) ? static_cast<int>(m->isSetName()) : 0;
}


/**
 * write comments
 */
LIBSBML_EXTERN
int
Member_isSetIdRef(Member_t * m)
{
  return (m != NULL) ? static_cast<int>(m->isSetIdRef()) : 0;
}


/**
 * write comments
 */
LIBSBML_EXTERN
int
Member_isSetMetaIdRef(Member_t * m)
{
  return (m != NULL) ? static_cast<int>(m->isSetMetaIdRef()) : 0;
}


/**
 * write comments
 */
LIBSBML_EXTERN
int
Member_setId(Member_t * m, const char * id)
{
  return (m != NULL) ? m->setId(id) : LIBSBML_INVALID_OBJECT;
}


/**
 * write comments
 */
LIBSBML_EXTERN
int
Member_setName(Member_t * m, const char * name)
{
  return (m != NULL) ? m->setName(name) : LIBSBML_INVALID_OBJECT;
}


/**
 * write comments
 */
LIBSBML_EXTERN
int
Member_setIdRef(Member_t * m, const char * idRef)
{
  return (m != NULL) ? m->setIdRef(idRef) : LIBSBML_INVALID_OBJECT;
}


/**
 * write comments
 */
LIBSBML_EXTERN
int
Member_setMetaIdRef(Member_t * m, const char * metaIdRef)
{
  return (m != NULL) ? m->setMetaIdRef(metaIdRef) : LIBSBML_INVALID_OBJECT;
}


/**
 * write comments
 */
LIBSBML_EXTERN
int
Member_unsetId(Member_t * m)
{
  return (m != NULL) ? m->unsetId() : LIBSBML_INVALID_OBJECT;
}


/**
 * write comments
 */
LIBSBML_EXTERN
int
Member_unsetName(Member_t * m)
{
  return (m != NULL) ? m->unsetName() : LIBSBML_INVALID_OBJECT;
}


/**
 * write comments
 */
LIBSBML_EXTERN
int
Member_unsetIdRef(Member_t * m)
{
  return (m != NULL) ? m->unsetIdRef() : LIBSBML_INVALID_OBJECT;
}


/**
 * write comments
 */
LIBSBML_EXTERN
int
Member_unsetMetaIdRef(Member_t * m)
{
  return (m != NULL) ? m->unsetMetaIdRef() : LIBSBML_INVALID_OBJECT;
}


/**
 * write comments
 */
LIBSBML_EXTERN
int
Member_hasRequiredAttributes(Member_t * m)
{
  return (m != NULL) ? static_cast<int>(m->hasRequiredAttributes()) : 0;
}


/**
 * write comments
 */
LIBSBML_EXTERN
Member_t *
ListOfMembers_getById(ListOf_t * lo, const char * sid)
{
  if (lo == NULL)
    return NULL;

  return (sid != NULL) ? static_cast <ListOfMembers *>(lo)->get(sid) : NULL;
}


/**
 * write comments
 */
LIBSBML_EXTERN
Member_t *
ListOfMembers_removeById(ListOf_t * lo, const char * sid)
{
  if (lo == NULL)
    return NULL;

  return (sid != NULL) ? static_cast <ListOfMembers *>(lo)->remove(sid) : NULL;
}




LIBSBML_CPP_NAMESPACE_END


